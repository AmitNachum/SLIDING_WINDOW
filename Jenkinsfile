pipeline {
  agent any

  stages {
    stage('Build') {
      steps {
        echo '=== Building Sliding Window ==='
        sh 'make'
      }
    }

    stage('Test') {
      steps {
        echo 'Testing...'
        // sh './main_sliding'   // optional: run it
      }
    }

    stage('Deploy') {
      steps {
        echo 'Deploy, Deploy, Deploy!'
      }
    }
  }
}
