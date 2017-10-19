var destination = document.querySelector("#container");
		
class Buttonify extends React.Component {
    render() {
        return(
            <div>
                <button type={this.props.behavior}>{this.props.children}</button>
            </div>
        )
    }
}

class HelloWorld extends React.Component {
		render(){
			return <p>Hello, {this.props.greetTarget}!</p>
		}
}

ReactDOM.render(
	<div>
		<HelloWorld greetTarget="Batman"/>
	    <HelloWorld greetTarget="Iron Man"/>
	    <HelloWorld greetTarget="Nicolas Cage"/>
	    <HelloWorld greetTarget="Mega Man"/>
	    <HelloWorld greetTarget="Bono"/>
	    <HelloWorld greetTarget="Catwoman"/>
  	</div>,
  destination
);

var socialLinksDestination = document.querySelector("#socialLinks");
ReactDOM.render(
	<h1>
	<a href="https://twitter.com/_Number6">Twitter</a><br/>
	<a href="https://www.youtube.com/c/Kyle4">Youtube</a><br/>
	<a href="https://www.github.com/Kyle44">Github</a>
	</h1>,
	socialLinks
);