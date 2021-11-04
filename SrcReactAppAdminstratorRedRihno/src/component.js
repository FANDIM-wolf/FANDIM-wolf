
import React , {useState , useEffect} from 'react'

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
  
  export default Component;