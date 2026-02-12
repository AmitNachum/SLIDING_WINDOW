pipeline {
  agent any

  stages {
    stage('Build') {
      steps {
        echo '=== Building Sliding Window ==='
        bat 'make'
      }
    }

    stage('Test') {
      steps {
        echo 'Testing...'
        // bat './main_sliding'   // optional: run it
      }
    }

    stage('Deploy') {
      steps {
        echo 'Deploy, Deploy, Deploy!'
      }
    }
  }
}
