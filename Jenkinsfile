pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        echo 'Building Progress'
      }
    }

    stage('Test') {
      parallel {
        stage('Module-Test') {
          steps {
            echo 'testing'
          }
        }

        stage('Integration Test') {
          steps {
            echo 'Running Integration Test'
          }
        }

        stage('error') {
          steps {
            echo 'Integration Test'
          }
        }

      }
    }

    stage('Deploy') {
      steps {
        echo 'deploing'
        input(message: 'Where to put it', id: 'this is the id', ok: 'this is ok', submitter: 'gabriel', submitterParameter: 'value')
      }
    }

  }
}