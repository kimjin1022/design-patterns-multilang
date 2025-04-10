using System;

class InternalClass {
    public string Fetch() => "get user info";
}

class ExternalClass {
    public string Search() => "get user info";
}

class Adapter {
    private ExternalClass external;

    public Adapter(ExternalClass ext) {
        external = ext;
    }

    public string Fetch() => external.Search();
}

class Program {
    static void Main() {
        var ext = new ExternalClass();
        var adapter = new Adapter(ext);
        Console.WriteLine(adapter.Fetch());
    }
}