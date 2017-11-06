import React, { Component } from 'react';
//import './CalculatorButton.css'
 
class CalculatorButton extends React.Component {
  constructor(props, context) {
    super(props, context);
 
    this.state = {
	items: []
    };

    this.addItem = this.addItem.bind(this);
    this.deleteItem = this.deleteItem.bind(this);
  }
   
  addItem(e) {
  var itemArray = this.state.items;
 
  if (this._inputElement.value !== "") {
    itemArray.unshift(
      {
        text: this._inputElement.value,
        key: Date.now()
      }
    );
 
    this.setState({
      items: itemArray
    });
 
    this._inputElement.value = "";
  }

  deleteItem(key) {
    var filteredItems = this.state.items.filter(function (item) {
      return (item.key !== key);
    });
  
    this.setState({
      items: filteredItems
    });
  }
 
  console.log(itemArray);
   
  e.preventDefault(); 
  }

  render() {
    return (
	<div>
		<p>{this.props.text}</p>
	</div>
    );
  }
};
 
export default CalculatorButton;
