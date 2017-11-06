import React, { Component } from 'react';
import './CalculatorButton.css'
 
class CalculatorButton extends React.Component {
  constructor(props, context) {
    super(props, context);
  }
   

  render() {
    return (
	<div>
		<p className="text">{this.props.text}</p>
	</div>
    );
  }
};
 
export default CalculatorButton;
