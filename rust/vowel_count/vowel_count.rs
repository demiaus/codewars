fn main() {
    println!("{}", get_count("Hello world!"));
}

fn get_count(string: &str) -> usize {
    let mut vowels_count: usize = 0;
    let vowels = "aeiou";

    for c in string.chars() {
        for v in vowels.chars() {
            if c == v {
                vowels_count += 1;
            }
        }
    }

    vowels_count
}
