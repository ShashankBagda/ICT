$('.owl-carousel').owlCarousel({
    loop:true,
    margin:10,
    nav:true,
    responsive:{
        0:{
            items:1
        },
        600:{
            items:1
        },
        1000:{
            items:1
        }
    },
    dots:false,
    autoWidth:false,
    center:true,
    navText: ["<img src='images/navleft.png'>","<img src='images/navright.png'>"]
})