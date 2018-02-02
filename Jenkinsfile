pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        build(propagate: true, job: 'test')
        echo 'Building Project...'
      }
    }
    stage('Test') {
      steps {
        echo 'Running Tests...'
      }
    }
    stage('Deploy') {
      steps {
        echo 'Deploying to target...'
      }
    }
  }
}