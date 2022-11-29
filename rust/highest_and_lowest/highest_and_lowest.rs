fn main() {
    println!("{}", high_and_low("8 3 -5 42 -1 0 0 -9 4 7 4 -4"));
    println!("{}", high_and_low("1 2 3"));
}

fn high_and_low(numbers: &str) -> String {

  let mut low  = i32::MAX;
  let mut high = i32::MIN;

  for n in numbers.split_whitespace().flat_map(str::parse) {
      if n < low  { low  = n }
      if n > high { high = n }
  }

  format!("{} {}", high, low)
}

