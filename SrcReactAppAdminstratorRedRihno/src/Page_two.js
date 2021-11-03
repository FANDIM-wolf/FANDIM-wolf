
import './App.css';





// link with props 
function Link(props)
{
    return (
        <div>
             <a href={props.link }>{props.link_name}</a>
        </div>
    );
}

function Header() {
    
  return (
    <div >
      <header >
        
        <p>
         Header
        </p>

        <Link link_name="Link name" link="https://www.google.com" />
        <a
         
        >
          
        </a>
      </header>
    </div>
  );
}

export default Header;
