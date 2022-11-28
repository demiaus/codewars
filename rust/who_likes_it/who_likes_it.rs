fn main() {
    println!("{}", likes(&[]));
    println!("{}", likes(&["Peter"]));
    println!("{}", likes(&["Jacob", "Alex"]));
    println!("{}", likes(&["Max", "John", "Mark"]));
    println!("{}", likes(&["Alex", "Jacob", "Mark", "Max"]));
}
fn likes(names: &[&str]) -> String {
    match names.len() {
        0 => format!("no one likes this"),
        1 => format!("{} likes this", names[0]),
        2 => format!("{} and {} like this", names[0], names[1]),
        3 => format!("{}, {} and {} like this", names[0], names[1], names[2]),
        len => format!("{}, {} and {} others like this", names[0], names[1], len - 2),
    }
}
