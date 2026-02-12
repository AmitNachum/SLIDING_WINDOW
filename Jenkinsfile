pipeline {
  agent {
      docker {image 'gcc:13'}
  }

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
