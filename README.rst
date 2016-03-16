* |master| ``master``: ``-std=c++11`` (**passed**)
* |libcxx| ``libcxx``: ``-std=c++11 -stdlib=libc++`` (**passed**)
* |libstdcxx| ``libstdcxx``: ``-std=c++11 -stdlib=libstdc++`` + ``#include <system_error>`` (**failed**)
* |libstdcxx.move| ``libstdcxx.move``: ``-std=c++11 -stdlib=libstdc++`` + ``#include <utility>`` (**failed**)
* |libstdcxx.type_traits| ``libstdcxx.type_traits``: ``-std=c++11 -stdlib=libstdc++`` + ``#include <type_traits>`` (**failed**)

.. |master| image:: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11.png?branch=master
  :target: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11/builds

.. |libcxx| image:: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11.png?branch=libcxx
  :target: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11/builds

.. |libstdcxx| image:: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11.png?branch=libstdcxx
  :target: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11/builds

.. |libstdcxx.move| image:: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11.png?branch=libstdcxx.move
  :target: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11/builds
  
.. |libstdcxx.type_traits| image:: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11.png?branch=libstdcxx.type_traits
  :target: https://travis-ci.org/travis-ci-tester/travis-test-clang-mac-cxx-11/builds
