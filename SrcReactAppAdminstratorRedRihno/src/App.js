import logo from './logo.svg';
import './App.css';
import Page_one from './Page_one';
import Page_two from './Page_two';
import ListUsers from './Page_three';
import { BrowserRouter as Router, Switch, Route, Link } from "react-router-dom";
import {useState , useEffect} from 'react'








function App() {
  return (
    <Router>
      <div>
        <Link to="/">Home</Link>
      </div>
      <div>
        <Link to="/Page_two">Get List games</Link>
      </div>
      <div>
        <Link to="/Page_three">Get List of users</Link>
      </div>

      <hr />
      <div>
    
      </div>
  
      <Switch>
        <Route exact path="/">
          < Page_one />
        </Route>
        <Route path="/Page_two">
          < Page_two />
        </Route>
        <Route path="/Page_three">
          < ListUsers />
        </Route>
        
      </Switch>
    </Router>
  );
}

export default App;
