# 알고리즘 스터디 풀이법 

본 리포지토리에서 관리하는 알고리즘 스터디의 각 문제에 대한 풀이법을 제공한다.
제공하는 풀이법은 정확한 정답이 아니고, 필자가 문제를 푸는데 사용한 아이디어이다.
실제 풀이법은 해당 문제를 푼 뒤 에디토리얼을 확인하길 바란다. 

풀이는 코드와 함께 곧바로 추가될 수도 있으며, 보통은 코드가 먼저 업로드 되고
풀이는 나중에 업로드 된다.

## 로컬 서버로 풀이법 사이트 실행하기 

아래의 패키지를 설치한다

```bash
sudo apt install ruby ruby-dev gem
sudo gem install jekyll bundler
```

본 리포지토리를 `clone` 하고 `git checkout gh-pages`를 통해 사이트 브랜치로 이동한다. 
`bundle install`을 통해 필요한 의존성 패키지들을 설치하고
`bundle exec jekyll serve` 로 서버를 실행시킨다. 서버가 정상적으로 실행된 경우
`localhost:4000`을 통해 접속할 수 있으며, 수정이 필요한 경우 `jekyll` 사용법에 맞춰
직접 업로드 하거나 `localhost:4000/admin`에서 수정한다. 
자신의 사이트로 변경하고 싶은 경우 `_config.yml`을 수정한다. 

## 사용된 템플릿

본 사이트는 [beautiful-jekyll](https://github.com/daattali/beautiful-jekyll)을 사용함.
