var btn = document.querySelector("button");
var img = document.querySelector("img");

var isShown = true;

btn.addEventListener('click', ()=> {

    if (isShown) {
        img.style.display = "none";
        isShown = false;
        sessionStorage.setItem = ('imgStatus', isShown);
    }
    else {
        img.style.display = "block";
        isShown = true;
        sessionStorage.setItem = ('imgStatus', isShown);
    }

});