import { StatusBar } from 'expo-status-bar';
import React, { useState } from 'react';
import { SafeAreaView ,Button, StyleSheet, Text, View, Alert } from 'react-native';
import PropTypes from 'prop-types'



const Cat = (props) => {
  const [isHungry, setIsHungry] = useState(true);

  return (
    <View>
      <Text>
        I am {props.name}, and I am {isHungry ? "hungry" : "full"}!
      </Text>
      <Button
        onPress={() => {
          setIsHungry(false);
        }}
        disabled={!isHungry}
        title={isHungry ? "Pour me some milk, please!" : "Thank you!"}
      />
    </View>
  );
}


function ComponentInfo(props){
  return (
    <View>
      <Text>{props.name}</Text>
    </View>
  )
}

// type of props , validation
ComponentInfo.proTypes = {
  name: PropTypes.string
}

export default function App() {




return (
<SafeAreaView style={styles.container}>
<Text >Navigator App</Text>
<ComponentInfo name = "ComponentInfo" />
<StatusBar style="auto" />
<Cat name="Yndina" />
</SafeAreaView>
);
}

const styles = StyleSheet.create({
container: {
flex: 1,
backgroundColor: '#fff',
alignItems: 'center',
justifyContent: 'center',
},
});
