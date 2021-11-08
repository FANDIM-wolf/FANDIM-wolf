import React , {Component} from "react";

class RecordsList extends Component{
    render(){
        return(
            <div>
                <h3>{this.props.name}</h3>
                <h3>{this.props.email}</h3>
                <button>Edit</button>
                <button>Delete</button>
            </div>
        );
    }
}
export default RecordsList;