# program terminates the killmenow code

exec { 'pkill':
  command  => 'pkill killmenow',
  provider => 'shell',
}
