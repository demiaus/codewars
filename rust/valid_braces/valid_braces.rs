fn main() {
    let line = "(()[[]{{}}])";
    println!("{}", valid_braces(&line));
}

fn valid_braces(s: &str) -> bool {
    let mut v: Vec<char> = Vec::new();
    let opened: [char; 3] = ['(', '[', '{'];
    let closed: [char; 3] = [')', ']', '}'];

    for brace in s.chars() {
        for (open, close) in opened.iter().zip(closed.iter()) {
            if brace == *open {
                v.push(brace);
            } else if brace == *close {
                if v.len() == 0 {
                    return false;
                } else if v.last().copied().unwrap() == *open {
                    v.pop();
                } else {
                    return false;
                }
            }
        }
    }

    v.len() == 0
}
