pipeline{
  agent any
    stages{
     stage('Build'){
        echo '=== Building Sliding Window ==='
        make
     }
     stage('Test'){
       echo 'Testing...'
     } 

     stage('Deploy'){
       echo 'Deploy, Deploy, Deploy!'
     } 
      
    }

  }
