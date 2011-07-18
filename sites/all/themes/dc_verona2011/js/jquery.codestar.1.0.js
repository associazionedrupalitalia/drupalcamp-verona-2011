(function($) {
  $.fn.codeline = function(settings) {
    this.settings = $.extend({}, settings);

    var recently   = this.settings.recently,
        line       = this.attr("class") + "-cline",
        parent_pos = 0,
        a_pad      = 15;

    if (parent_pos = this.offsetParent().position()) {
      parent_pos = parent_pos.left;
    }

    var bindLineTrigger = function (el) {
      $(el).bind("line_trig", function(event, t) {
        var c_class = $(el).hasClass("active");
        var v_class = $(el).hasClass("current_page_ancestor");
        var padding_left = parseInt($(el).css('padding-left'));

        if (c_class == true || v_class == true) {
          var c_pos   = $(el).position().left + padding_left + parent_pos;
          var c_width = $(el).width() + a_pad - padding_left;

          if (t == "anime") {
            jQuery("#" + line).stop().animate({
              width: c_width,
              left: c_pos
            }, 1000, "easeOutExpo");
          } else {
            jQuery("#" + line).css({
              width: c_width,
              left: c_pos
            });
          }
        }
      });

      $(el).trigger("line_trig");
    };

    /* setting line position */
    $(this).find("li").each(function(i, el) { bindLineTrigger(el); });

    var lis = $(this).find("ul:first > li");
    /* link hover line effect */
    lis.mouseover(function() {
      var padding_left = parseInt($(this).css('padding-left'));
      var a_pos   = $(this).position().left + padding_left + parent_pos;
      var a_width = $(this).find("a").width() + a_pad - padding_left;

      jQuery("#" + line).stop().animate({width: a_width, left: a_pos}, 500, "easeOutExpo");
    });

    lis.mouseleave(function () {
      $(this).siblings("li.active").trigger("line_trig", ["anime"]);
    });
  };
}(jQuery));

(function( $ ){

  $.fn.codeslide = function(settings) {

  this.settings = $.extend({}, this.defaults, settings);


  var cspeed = this.settings.speed;

  var autoplay = this.settings.autoplay;
  var buttons  = this.settings.buttons;
  var pos      = this.position();

  $(this).each(function (){

    var target    = "."+ $(this).parent().attr("class");

    var sid      = 0;
    var timer     = 0;
    var arrows_pad  = 12;

    $(target).find(".next, .prev").css("top", $(this).height()/2 - arrows_pad);

    $(target).find('.codeslide').find("iframe, object, embed").each(function(){
      var url = $(this).attr("src");
      $(this).attr("src",url+"?wmode=transparent").attr("wmode", "transparent");
    });


    $(target).find(".nums li:first").addClass("active");


    var rotating = function(t){

      var oldid = $(t).find(".nums li").index( $(t).find(".nums li.active") );
      var sid = $(t).find(".codeslide li").index( $cslide );


      if(oldid != sid) {

        $(t).find(".nums li.active").removeClass('active');
        $(t).find(".codeslide li").hide();
        $(t).find(".codeslide li.current").show().removeClass('current').css({'position':'absolute', 'z-index': '0'});
        $cslide.addClass('current').css({'position': 'absolute', 'z-index':'1'}).hide().fadeIn();
        $cnum.addClass('active');

      }

    };

    var rotateInterval = function(t, ap){

      $cnum = $(t).find('.nums li.active').next();
      $cslide = $(t).find('.codeslide li.current').next();

      if ( $cnum.length == 0) {
        $cnum = $(t).find('.nums li:first');
        $cslide = $(t).find('.codeslide li:first');
      }

      if(ap == "true"){
        rotating(t);
      }

    };

    $(target).find(".nums li").click(function() {

      $cnum = $(this);

      var index = $(target).find(".nums li").index(this);

      $cslide = $(target).find(".codeslide li:eq("+index+")");

      clearInterval(timer);
      timer = setInterval(function(){ rotateInterval(target, autoplay); }, cspeed);
      rotating(target);

      return false;

    });


    $(target).find(".next").click(function() {

      ($(target).find('.nums li').length-1 != sid) ? sid = (sid+1) : sid = 0;

      $cnum = $(target).find(".nums li:eq("+sid+")");
      $cslide = $(target).find(".codeslide li:eq("+sid+")");

      clearInterval(timer);
      timer = setInterval(function(){ rotateInterval(target, autoplay); }, cspeed);

      rotating(target);

      return false;


    });


    $(target).find(".prev").click(function() {

      (sid != 0 ) ? sid = (sid-1) : sid = $(target).find('.nums li').length-1;

      $cnum = $(target).find(".nums li:eq("+sid+")");
      $cslide = $(target).find(".codeslide li:eq("+sid+")");

      clearInterval(timer);
      timer = setInterval(function(){ rotateInterval(target, autoplay); }, cspeed);

      rotating(target);


      return false;

    });


    var target_img = $(target).find(".codeslide li:first img").attr("src");
    if(target_img == undefined){ target_img = "images/blank.gif"; }

    var img = new Image();
    $(img).load(function(){

      if(buttons != "false") {
        $(target).find(".nums").css("display", "block");
      }

      $(target).find(".codeslide").css("background-image", "none");
      $(target).find('.codeslide li:first').addClass("current").hide().fadeIn("fast");

      $(target).find(".codeslide").hover(function() {

        clearInterval(timer);
        $(target).find(".next, .prev").fadeIn("fast");

      },function() {

        clearInterval(timer);
        timer = setInterval(function(){ rotateInterval(target, autoplay); }, cspeed);
        $(target).find(".next, .prev").fadeOut("fast");

      });

      timer = setInterval(function(){ rotateInterval(target, autoplay); }, cspeed);

    }).attr('src', target_img);



  });

  };
})( jQuery );

(function($){

  $.fn.extend({
    portfoliolist: function(options) {

      /* Portfolio Boxes and Recently Boxes up effect. RollOver & RollOut */
      jQuery(".portfolio_boxes ul li, .recently_boxes ul li").hover( function () {

        jQuery(this).find(".picture").stop().animate({"top":-30}, 500, "easeOutExpo");
        jQuery(this).find(".alpha a").find("img").stop().animate({"opacity":0.50}, 500, "easeOutExpo");


      },function () {

        jQuery(this).find(".picture").stop().animate({"top":0}, 500, "easeOutExpo");
        jQuery(this).find(".alpha a").find("img").stop().animate({"opacity":1}, 500, "easeOutExpo");

      });

    }
  });

})(jQuery);

(function($){

  $.fn.extend({
    fixfooter: function(options) {

      var getHeight = $(document.body).height() - $(".sticky_footer").height();
      if(getHeight < $(window).height()){
        var setHeight = $(window).height() - getHeight;
        $(".sticky_footer").height(setHeight);
      }

    }
  });

})(jQuery);


/* jQuery Multi Level Menu by Dynamic Drive: http://www.dynamicdrive.com/ */
var jqueryslidemenu={
  animateduration: {over: 100, out: 100},

  buildmenu: function(menuid){
    jQuery(document).ready(function($) {
      var $mainmenu = $(menuid + " > ul");
      var $headers = $mainmenu.children();
      $headers.each(function(i){
        var $curobj = $(this);
        var $subul = $(this).find('ul:eq(0)')
        this._dimensions = {
          w: this.offsetWidth,
          h: this.offsetHeight,
          subulw: $subul.outerWidth(),
          subulh: $subul.outerHeight()
        }
        this.istopheader = $curobj.parents("ul").length == 1 ? true : false;
        $subul.css({
          top: this.istopheader ? this._dimensions.h + "px" : -5
        });
        $curobj.hover(
          function(e) {
            var $targetul = $(this).children("ul:eq(0)");
            this._offsets = {
              left: $(this).offset().left,
              top: $(this).offset().top
            }
            var menuleft = this.istopheader ? 0 : this._dimensions.w;
            menuleft = (this._offsets.left+menuleft + this._dimensions.subulw > $(window).width())
              ? (this.istopheader ? - this._dimensions.subulw + this._dimensions.w : -this._dimensions.w)
              : menuleft;
            if ($targetul.queue().length <= 1) {
              $targetul.css({
                left: menuleft + "px",
                width: this._dimensions.subulw + 'px'
              }).slideDown(jqueryslidemenu.animateduration.over);
            }
          },
          function(e) {
            var $targetul = $(this).children("ul:eq(0)");
            $targetul.slideUp(jqueryslidemenu.animateduration.out);
          }
        )
        $curobj.click(function() {
          $(this).children("ul:eq(0)").hide();
        })
      })
      $mainmenu.find("ul").css({display:'none', visibility:'visible'})
    });
  }
}

//jqueryslidemenu.buildmenu("#main-menu-nav");
