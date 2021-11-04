import React, { Component } from 'react';

class Form extends Component{
    constructor(props){
        super(props);
        this.state = {
            username:''
        }
    }

    submitHandler = async (event) => {
        event.preventDefault();
        console.log(this.state.username);
        const data = this.state.username;
        
         fetch("http://127.0.0.1/admin/get_api.php",{
            method:'POST',
            headers: {
                'Content-Type': 'application/json'
              },
              body: JSON.stringify({
                'name': data,
            }), 
        }).then((res)=>console.log(res));

    }

    render(){
        return(
            <div className="form">
                <form method="POST" onSubmit={this.submitHandler}>
                    <input type="text" placeholder="name" name="name" onChange={(event)=>{
                        this.setState({
                            username:event.target.value
                        });
                    }} value={this.state.username} />
                    <input type="submit" value="click" name="submit" />
                </form>
            </div>
        );
    }

}

export default Form;