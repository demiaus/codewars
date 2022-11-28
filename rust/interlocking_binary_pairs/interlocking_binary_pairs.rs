fn main() {
    println!("{}", interlockable(9, 4));
    println!("{}", interlockable(3, 6));
}

fn interlockable(a: u64, b: u64) -> bool {
    a & b == 0
}
