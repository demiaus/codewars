fn main() {
    println!("{}", solution("abc", "bc"));
    println!("{}", solution("abc", "d"));
}

fn solution(word: &str, ending: &str) -> bool {
    word.ends_with(ending)
}
