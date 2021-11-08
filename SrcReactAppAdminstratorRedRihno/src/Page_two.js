
import './App.css';
import {useState , useEffect} from 'react'
import Form from './Form';
import Users from './Users';

function Component() {
  const [item , setItem] = useState([]);
  useEffect(()=>{
      fetch("http://127.0.0.1/admin/api.php")
          .then(res => res.json())
          .then(
              (result) => {
                  setItem(result);
              }
          )
  },[])
  return (
    <div >
      <header >
        
        <h3>
         List of data 
        </h3>
        
            {item.map(
                item => (
                 <p> {item.name}</p>
                )
            )}
        
      </header>
    </div>
  );
}

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
        <Component />
        
        <a
         
        >
         <Form/> 

         <Users/>
        </a>
      </header>
    </div>
  );
}

export default Header;
