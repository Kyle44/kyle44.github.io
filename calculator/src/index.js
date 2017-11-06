import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import CalculatorButton from './CalculatorButton.js'

var destination = document.querySelector("#container")
  
ReactDOM.render(
    <div>
        <CalculatorButton/>
    </div>,
    destination
);
