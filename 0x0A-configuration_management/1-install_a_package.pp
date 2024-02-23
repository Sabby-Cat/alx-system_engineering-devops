#install flask 2.1.0
exec { 'install_flask':
  command => '/usr/bin/pip3 install Werkzeug==2.1.1 Flask==2.1.0',
  path    => ['/usr/bin'],
  require => Package['python3-pip'],
}
