import axios from 'axios';
import React, { Component } from 'react'
import RecordsList from './RecordList';
class Users extends Component{
    constructor(props) {
        super(props);
        this.state = {
          error: null,
          isLoaded: false,
          items: []
        };
      } 

    componentDidMount() {
        fetch("http://127.0.0.1/admin/list.php")
          .then(res => res.json())
          .then(
            (result) => {
              this.setState({
                isLoaded: true,
                //items: result.items
                items : result
              });
            },
            // Note: it's important to handle errors here
            // instead of a catch() block so that we don't swallow
            // exceptions from actual bugs in components.
            (error) => {
              this.setState({
                isLoaded: true,
                error
              });
            }
          )
        }
   
        render(){
            const { error, isLoaded, items } = this.state;
            if (error) {
              return <div>Error: {error.message}</div>;
            } else if (!isLoaded) {
              return <div>Loading...</div>;
            } else {
              return (
                  
                <ul>
                  {items.map(item => (
                    <li key={item.id}>
                      {item.name} 
                    </li>
                  ))}
                </ul>
      
                
              );
            }
        }
}

export default Users;