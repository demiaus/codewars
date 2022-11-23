fn main() {
    println!("{}", square_digits(9119));
}

fn square_digits(num: u64) -> u64 {
    let mut ret = String::new();
    for c in num.to_string().chars() {
        let mut i = c.to_digit(10).unwrap();
        i *= i;
        ret.push_str(&i.to_string());
    }
    ret.parse::<u64>().unwrap()
}
