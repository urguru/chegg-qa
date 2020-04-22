function contains_test() {
    var post_element = document.getElementById("post");
    var str = post_element.innerText;
    var words = str.trim().replace(".", " ").split(" ");
    var found = false;
    for (var i = 0; i < words.length; ++i) {
        if (words[i] == "test") {
            alert("The element with the id post contains the word test")
            found = true;
        }
    }
    if (found == false) {
        document.querySelector("body").innerHTML = "<h1>Not a Test</h1>";
    }
}