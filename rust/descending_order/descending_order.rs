fn main() {
    println!("{:?}", descending_order(0));
    println!("{:?}", descending_order(1));
    println!("{:?}", descending_order(15));
    println!("{:?}", descending_order(1021));
    println!("{:?}", descending_order(123456789));
    println!("{:?}", descending_order(145263));
    println!("{:?}", descending_order(1254859723));
}

fn descending_order(x: u64) -> u64 {
    let mut v: Vec<char> = x.to_string()
        .chars()
        .collect();
    v.sort();
    v.reverse();
    v.into_iter()
        .collect::<String>()
        .parse::<u64>()
        .unwrap()
}

