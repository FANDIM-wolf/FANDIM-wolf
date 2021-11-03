import logo from './logo.svg';
import './App.css';
import Page_one from './Page_one';
import Page_two from './Page_two';
import { BrowserRouter as Router, Switch, Route, Link } from "react-router-dom";
function App() {
  return (
    <Router>
      <div>
        <Link to="/">Home</Link>
      </div>
      <div>
        <Link to="/Page_two">Get Data</Link>
      </div>
      

      <hr />

      <Switch>
        <Route exact path="/">
          < Page_one />
        </Route>
        <Route path="/Page_two">
          < Page_two />
        </Route>
        
      </Switch>
    </Router>
  );
}

export default App;
