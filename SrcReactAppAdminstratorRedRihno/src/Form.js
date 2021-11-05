import axios from 'axios';
import React, { Component } from 'react';

class Form extends Component{
    constructor(props){
        super(props);
        this.onChangeName = this.onChangeName.bind(this);
        this.onChangeEmail = this.onChangeEmail.bind(this);
        this.onChangeSubmit = this.onChangeSubmit.bind(this);
        this.state = {
            name :'',
            email:'',
        }
    }

    onChangeName(e){
        this.setState({
            name:e.target.value
        });

    }

    onChangeEmail(e){
        this.setState({
            email:e.target.value
        });
    }
    onChangeSubmit(e)
    {
        e.preventDefault();
        const obj = {
            name : this.state.name ,
            email: this.state.email
        };
        console.log(obj);
        axios.post('http://localhost/admin/post_api.php',obj).then(res=> console.log(res.data));

    }
        render(){
            return(
                <div>
                    <p>Insert</p>
                    <form onClick={this.onChangeSubmit}>
                        <div>
                    <p>Name</p>
                    <input type="text"  name="name" onChange={this.onChangeName} placeholder="Informe seu login" />
                        </div>

                        <div>
                    <p>Email</p>
                    <input type="text"   name="email"  onChange={this.onChangeEmail}/>
                        </div> 

                        <div>
                    <input type="submit" value="Register User" />
                        </div>
                    </form>
                </div>
            )
        }
}

export default Form;