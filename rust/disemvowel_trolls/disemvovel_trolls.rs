fn main() {
    println!("{}", disemvowel("Hello, world!"));
}

fn disemvowel(s: &str) -> String {
    let mut result = String::new();
    for c in s.chars() {
        match c {
            'a' | 'e' | 'i' | 'o' | 'u' => continue,
            'A' | 'E' | 'I' | 'O' | 'U' => continue,
            _ => result.push(c),
        }
    }
    result
}
