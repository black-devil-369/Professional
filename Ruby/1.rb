class King
  def pattern
    a = gets.chomp.to_i
    for i in 1..a
      for j in 1..i
        print(" * ")
      end
      puts(" ")
    end
    puts("Printing a Star in another forms")
    for k in a..1
      for l in 1..k
        print(" * ")
      end
      puts(" ")
    end
  end
end
obje = King.new
obje.pattern