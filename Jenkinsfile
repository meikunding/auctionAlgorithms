pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        dir(path: '/tmp') {
          git(url: 'https://github.com/nickfoss32/auctionAlgorithms.git', branch: 'master')
          sh 'mkdir auctionAlgorithms/build; cd $_; cmake ..; make'
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
  }
}