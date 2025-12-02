import './App.css';
import Horse from './components/Horse.js';
import  Carousel  from './components/MyCarousel.js';

function createHorses(){
  const myApps = [
    {sourceCode: "", name: "Wishlist Watchers", url: "./projects/wishlist-watchers/"},
    {sourceCode: "https://github.com/Kyle44/Sudoku", name: "Sudoku", url: ""},
    {sourceCode: "https://github.com/Kyle44/Blackjack", name: "Blackjack", url: ""},
    {sourceCode: "https://github.com/Kyle44/TimeTellingForKids", name: "Time Telling for Kids", url: "./projects/TimeTellingForKids/proj1.html", videoDemo: "https://www.youtube.com/watch?v=bWtcCHXrQv4&ab_channel=KyleFritz"},
    {sourceCode: "", name: "Prime Numbers", url: ""},
  ]
  const myHorses = myApps.map((item) => <Horse item={item}></Horse>)
  console.log(myHorses)
  return myHorses
}

function App() {
  const horses = createHorses();
  return (

    <>
      <Carousel
        horses={horses}
      >

      </Carousel>
    </>

  );
}

export default App;
