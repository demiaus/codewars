fn main() {
    println!("{}", make_readable(0));
    println!("{}", make_readable(59));
    println!("{}", make_readable(60));
    println!("{}", make_readable(3599));
    println!("{}", make_readable(3600));
    println!("{}", make_readable(278610));
}

fn make_readable(seconds: u32) -> String {
    format!("{:02}:{:02}:{:02}", seconds/3600, seconds/60 % 60, seconds % 60)
}
