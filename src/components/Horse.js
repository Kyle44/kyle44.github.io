



export default function Horse (props) {
    console.log(props.item)

    const noUrl = <div>{props.item.name} | <a href={props.item.sourceCode}> Source Code</a></div>
    const withUrl = <><a href={props.item.url}>{props.item.name}</a> | <a href={props.item.sourceCode}> Source Code</a></>

    return(
        
        <>
        {props.item.url ? 
        withUrl
        : noUrl
        }
       
            
        </>
    )
}