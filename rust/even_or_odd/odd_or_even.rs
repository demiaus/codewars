fn main() {
    println!("{}", even_or_odd(4));
}

fn even_or_odd(i: i32) -> &'static str {
    if i % 2 == 0 {
        "Even"
    } else {
        "Odd"
    }
}
