// Here we load the javascript only when the full document has been loaded on the browser
document.addEventListener("DOMContentLoaded", () => {
  // We add an event listener to the button and on clicking it we execute the following function
  document.querySelector("#btn").addEventListener("click", event => {
    // We create two variables to store the data entered in the input fields
    var word = document.querySelector("#word").value;
    var str = document.getElementById("str").value;

    // We create a dictionary to store the alphabets in the word
    var dict = {};
    // At first we add the keys to the dictionary and store the zero in them
    for (var i = 0; i < word.length; ++i) {
      if (!(word[i] in dict)) {
        dict[word[i]] = 0;
      }
    }
    // Then for every letter that is in the string we increase its count in the dictionary
    for (var i = 0; i < str.length; ++i) {
      if (str[i] in dict) {
        dict[str[i]]++;
      }
    }
    
    // This is the way of giving input to the plotly library to create a bar graph chart
    var data = [
      {
        // We only include the letters from the dictionary if thier word count is more than 0
        x: Object.keys(dict).filter(item => dict[item] > 0),
        y: Object.values(dict).filter(item => item > 0),
        type: "bar",
        marker: {
          color: "rgb(255,255,0)"
        }
      }
    ];

    // Then we plot the bar graph
    Plotly.newPlot("myDiv", data);
    
  });
});
