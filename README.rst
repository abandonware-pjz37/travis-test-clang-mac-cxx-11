* |master| ``master``: ``-std=c++11`` (**passed**)
* |libcxx| ``libcxx``: ``-std=c++11 -stdlib=libc++`` (**passed**)
* |libstdcxx| ``libstdcxx``: ``-std=c++11 -stdlib=libstdc++`` + ``#include <system_error>`` (**failed**)
* |libstdcxx.move| ``libstdcxx.move``: ``-std=c++11 -stdlib=libstdc++`` + ``#include <utility>`` (**failed**)

.. |master| image:: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11.png?branch=master
  :target: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11/builds

.. |libcxx| image:: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11.png?branch=libcxx
  :target: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11/builds

.. |libstdcxx| image:: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11.png?branch=libstdcxx
  :target: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11/builds

.. |libstdcxx.move| image:: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11.png?branch=libstdcxx.move
  :target: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11/builds
