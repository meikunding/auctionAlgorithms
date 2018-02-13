pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        git(url: 'https://github.com/nickfoss32/auctionAlgorithms.git', branch: 'master')
      }
    }
    stage('Test') {
      steps {
        echo 'Running Tests'
      }
    }
    stage('Deploy') {
      steps {
        echo 'Deploying to target...'
      }
    }
    stage('Documentation') {
      steps {
        echo 'Generating Documentation'
      }
    }
    stage('Cleanup') {
      steps {
        echo 'Performing Cleanup'
      }
    }
  }
}