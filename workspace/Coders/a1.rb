input=gets.chomp
m=input.split(' ')[0].to_i
n=input.split(' ')[1].to_i
a=input.split(' ')[2].to_i
x=((m+a-1)/a)
y=((n+a-1)/a)
ans=x*y
puts "#{ans}"
