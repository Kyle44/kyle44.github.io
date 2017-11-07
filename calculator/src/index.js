import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import CalculatorButton from './CalculatorButton.js'

var destination = document.querySelector("#container")
  
ReactDOM.render(
    <div>
	<div className="row">
			<CalculatorButton text="squared"/>
	    	<CalculatorButton text="sqrt"/>
		</div>
    	<div className="row">
		    <CalculatorButton text="1"/>
	        <CalculatorButton text="2"/>
			<CalculatorButton text="3"/>
			<CalculatorButton text="+"/>
		</div>
		<div className="row">
		    <CalculatorButton text="4"/>
	        <CalculatorButton text="5"/>
			<CalculatorButton text="6"/>
			<CalculatorButton text="-"/>
		</div>
		<div className="row">
		    <CalculatorButton text="7"/>
	        <CalculatorButton text="8"/>
			<CalculatorButton text="9"/>
			<CalculatorButton text="*"/>
		</div>
		<div className="row">
		    <CalculatorButton text="."/>
	        <CalculatorButton text="0"/>
			<CalculatorButton text="="/>
			<CalculatorButton text="/"/>
		</div>
	</div>,
    destination
);
