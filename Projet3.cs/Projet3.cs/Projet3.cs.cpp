public class Client
{
    private string nom;
    private string prenom;
    private string courriel;
    private string carteCredit;
    private int numChambre;

    public Client(string nom, string prenom, string courriel, string carteCredit, int numChambre)
    {
        this.nom = nom;
        this.prenom = prenom;
        this.courriel = courriel;
        this.carteCredit = carteCredit;
        this.numChambre = numChambre;
    }

    public string Nom = > nom;
    public string Prenom = > prenom;
    public string Courriel = > courriel;
    public string CarteCredit = > carteCredit;
    public int NumChambre = > numChambre;
}

public class Hotel
{
    private List<Client> clients = new List<Client>();

    public IReadOnlyList<Client> Clients = > clients;

    public void AjouterClient(Client client)
    {
        clients.Add(client);
    }
}

