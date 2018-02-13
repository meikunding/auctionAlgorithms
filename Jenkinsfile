pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        catchError() {
          git(url: 'https://github.com/nickfoss32/auctionAlgorithms.git', branch: 'master', changelog: true)
          sh 'cd auctionAlgorithms; mkdir build; cd build; cmake ..; make'
        }
        
      }
    }
    stage('Test') {
      steps {
        sh './TestAuction'
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