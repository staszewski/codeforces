process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
    inputString += inputStdin;
});

process.stdin.on("end", (_) => {
    inputString = inputString
        .trim()
        .split("\n")
        .map((string) => {
            return string.trim();
        });

    main();
});

function readline() {
    return inputString;
}
function main() {
  let inputs = readline()



  const tooLong = (word) => {
    if (word.length > 10) {
        const firstLetter = word[0];
        const lastLetter = word[word.length - 1];
        const abbreviation = `${firstLetter}${word.length - 2}${lastLetter}`;
        return abbreviation;
    }
    return word;
};

inputs.forEach(input => {
    if (!isNaN(input)) {
      return 
    }
   console.log(tooLong(input))
})

 


}
